class Shape{
	void Area(int l, int b){
		System.out.println("Area of rectangle = "+ l*b + " sq. unit\n");
	}
	void Area(int Radius){
		System.out.println("Area of circle = " + 3.14 * Radius * Radius + " sq. unit\n");
	}
	void Area(double b, double h){
		System.out.println("Area of triangle = "+ 0.5*b*h + " sq. unit\n");
	}
}
class Practical3{
	public static void main(String[] args) {
		Shape s= new Shape();
		s.Area(4, 5);
		s.Area(7);
		s.Area(8.0 , 6.0);
	}
}