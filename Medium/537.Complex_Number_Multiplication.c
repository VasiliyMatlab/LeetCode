typedef struct {
	int Re;
	int Im;
} Complex;

Complex mul(Complex num1, Complex num2){
    Complex num3;
    num3.Re = num1.Re*num2.Re - num1.Im*num2.Im;
    num3.Im = num1.Re*num2.Im + num1.Im*num2.Re;
    return num3;
}

char * complexNumberMultiply(char * num1, char * num2){
    Complex a, b, c;
	sscanf(num1, "%d+%di", &a.Re, &a.Im);
	sscanf(num2, "%d+%di", &b.Re, &b.Im);
	c = mul(a, b);
	char *buf = (char *) malloc(128*sizeof(char));
	sprintf(buf, "%d+%di", c.Re, c.Im);
	return buf;
}