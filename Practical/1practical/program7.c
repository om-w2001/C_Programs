/*Program 7:
WAP to check whether the given input is a Pythagorean triplet or not
Note: Pythagorean triplet means if given three numbers a b and c follows this pattern
c*c = a*a + b*b
Any side can be hypotenuse */
   #include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter the size side");
	scanf("%d%d%d",&x,&y,&z);
	if (x*x+z*z==y*y)
	{
		printf("This tringle satisfies the py");
	}
	else {
		printf(" NOT SATISFIES THE PY");
	}
}
