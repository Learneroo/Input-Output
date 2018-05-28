import java.util.*;

public class Main {
	static void doStuff(int[] ar){
		//your code here
	}

	//boilerplate code
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int t = in.nextInt();
		for(int c=0; c<t; c++){
			int n = in.nextInt();
			int[] ar = new int[n];
			for(int i=0; i<n; i++){
				ar[i] = in.nextInt();
			}
			doStuff(ar);
		}
	}
}
