int power(int base , int power){
    int result = base;
    for(int i=1; i<power; i++){
        result *= base;
    }

    return result;
}

int digitLen(int a){
    int sum , len =0;
    while(a!=0){
        sum = a%10;
        a -= sum;
        a /= 10;
        len++;
    }

    return len;
}

bool narcissistic( int value ){
  int len = digitLen(value);
    int pow =0;
    int res = value;

    while(res){
        pow += power(res%10 , len);
        res /= 10;
    }

    return (pow == value);
}

int main(){

  narcissistic(153);
  return 0;
}
