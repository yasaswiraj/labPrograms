import java.util.*;
import java.math.*;

public class RSA {
    public static BigInteger generateE(BigInteger g) {
        int y, intGCD;
        BigInteger e;
        BigInteger gcd;
        Random x = new Random();
        do {
            y = x.nextInt(g.intValue() - 1);
            String z = Integer.toString(y);
            e = new BigInteger(z);
            gcd = g.gcd(e);
            intGCD = gcd.intValue();
        } while (y <= 2 || intGCD != 1);
        return e;
    };

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a prime number");
        BigInteger p = sc.nextBigInteger();
        System.out.println("enter another prime number");
        BigInteger q = sc.nextBigInteger();
        BigInteger n = p.multiply(q);
        BigInteger n2 = (p.subtract(BigInteger.ONE)).multiply(q.subtract(BigInteger.ONE));
        BigInteger e = generateE(n2);
        BigInteger d = e.modInverse(n2);
        System.out.println("Encryption keys are: " + e + ", " + n);
        System.out.println("Decryption keys are: " + d + ", " + n);
    }
}
