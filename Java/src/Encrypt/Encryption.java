package Encrypt;

public class Encryption {
	private String opstring;
	private int key;
	
	public Encryption(String opstring, int key) {
		this.opstring = opstring;
		this.key = key;
	}
	
	private char performIncrement(char c) {
		int res;
		if(c >= 'a' && c <= 'z') {
			res = (c - 'a' + key) % 26 + 'a';
		}
		else if(c >= 'A' && c <= 'Z') {
			res = (c - 'A' + key) % 26 + 'A';
		}
		else {
			res = c;
		}
		return (char) res;
	}
	
	public String encrypt() {
		int len = opstring.length();
		String output = "";
		for(int i = 0; i < len; i++) {
			output += performIncrement(opstring.charAt(i));
		}
		return output;
	}
}
