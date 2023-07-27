int GetBMICategory(int weight, float height) {
    int bmi=weight/(height * height);
    if(bmi< 18)return 0;
    else if(bmi>=18 && bmi<25) return 1;
    else if(bmi>=25 && bmi<30) return 2;
    else if(bmi>=30 && bmi<40) return 3;
    else return 4;
}