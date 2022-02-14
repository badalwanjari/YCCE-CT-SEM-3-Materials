var n = 5;
var a=0, b=1, c;

console.log("Fibonacci Series : ")
var i=1;                    //Initialization
while(i<=n){					//Condition Statement
	console.log(a);
	c=a+b;
	a=b;
	b=c;
	i++;					//Increment Statement
}