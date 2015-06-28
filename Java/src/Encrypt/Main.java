package Encrypt;

public class Main {
	public static void main(String[] args) {
		String input_str = "";
		int key = Integer.parseInt(args[args.length - 1]);
		for(int i = 0; i < args.length - 1; i++) {
			input_str += args[i] + " ";
		}
		Encryption e = new Encryption(input_str, key);
		System.out.println(e.encrypt());
	}
}
