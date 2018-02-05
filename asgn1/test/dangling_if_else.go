package main

func main() {

    var i int = 0;
    var a [3]int = {1,2,3};
    if (i<=3) {
        a[i]++;
    }
    if (i>=2) {
        a[i]--;
    }else {
	a[i] = 1;}
}
