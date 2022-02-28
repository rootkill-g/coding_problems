import java.util.Scanner

fun main() {
  var scan = Scanner(System. `in`)
  var n: Int = scan.nextInt()
  var s = readLine()!!
  var j: Int = 2;
  var i: Int = 0;
  while (i < n) {
    print("${s[i]}")
    i = i + j
    j += 1
  }
  println()
}
