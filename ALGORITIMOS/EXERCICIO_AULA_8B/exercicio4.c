float converteFlireCelsius(float pTemp);

int main(int argc, char const *argv[])
{
    float temp;
    printf("informe uma temperatutura em Fahrenheit: ");
    scanf("%f", &temp);
    printf("\n a temperatura  convertida e: %f", converteFlireCelsius(temp));
    return 0;
}
float converteFlireCelsius(float pTemp)
{
    return (pTemp - 32) / 1.8;
};
