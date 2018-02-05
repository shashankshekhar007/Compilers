package main

type T struct{
	a byte;
	b int;
	c byte;
	d int16;
	e float64;
	name string;
	f byte;
}

func f (x T){
	x.a = 'a'
	x.b = 47114711;
	x.c = 'c';
	x.d = 1234;
	x.e = 3.141592897932;
	x.f = '*';
	x.name = "abc";
}

func main() {
	var k T;
	f(k);
}
