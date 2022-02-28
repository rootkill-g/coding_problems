import java.util.Scanner

fun main() {
  var scan = Scanner(System. `in`)
  var t: Int = scan.nextInt()

  for (i in 0..t - 1) {
    var n: Int = scan.nextInt()
    var a: IntArray = IntArray(n)
    var found: Boolean = false

    for (j in 0..n - 1) {
      a[j] = scan.nextInt()
    }

    for (j in 1..n - 2) {
      if (a[j] != a[j - 1] && a[j] != a[j + 1]) {
        println(j + 1)
        found = true
      }
    }

    if (!found) {
      if (a[0] != a[1]) {
        println("1")
      } else {
        println(n)
      }
    }
  }
}
