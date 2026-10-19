class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double soma = 0;
        for (int i = 0; i < k; i++){
            soma += nums[i];
        }
        double maior = soma;
        int inicio = 0;
        int fim = k - 1;

        while (fim < nums.size() - 1){
            soma -= nums[inicio];   // sai o da esquerda
            inicio++;
            fim++;
            soma += nums[fim];      // entra o da direita

            if (soma > maior){
                maior = soma;
            }
        }
        return maior / k;
    }
};