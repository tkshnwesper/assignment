using System;

class Encrypt {
	private class Encryption {
		string opstring;
		int key;

		public Encryption(string opstring, int key) {
			this.opstring = opstring;
			this.key = key;
		}

		private char performIncrement(char c) {
			int res;
			if (c >= 'a' && c <= 'z') {
				res = (c - 'a' + key) % 26 + 'a';
			} else if (c >= 'A' && c <= 'Z') {
				res = (c - 'A' + key) % 26 + 'A';
			} else {
				res = c;
			}
			return (char)res;
		}

		public string encrypt() {
			string output = "";
			for(int i = 0; i < opstring.Length; i++) {
				output += performIncrement (opstring [i]);
			}
			return output;
		}
	}

	public static void Main(string[] args) {
		string input_string = "";
		int key = Int32.Parse(args[args.Length - 1]);
		for(int i = 0; i < args.Length - 1; i++) {
			input_string += args [i] + " ";
		}
		input_string = input_string.Remove (input_string.Length - 1);
		Encryption e = new Encryption (input_string, key);
		Console.WriteLine(e.encrypt ());
	}
}