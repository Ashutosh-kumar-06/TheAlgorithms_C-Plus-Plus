/**
 * @file
 * @brief Implementation to check whether a number is a palindrome.
 *
 * @details
 * A palindrome number is a number that remains the same when its digits are
 * reversed.
 *
 * ### Algorithm
 * - Take the input number `n`.
 * - Reverse its digits.
 * - Compare the reversed number with the original.
 * - If both are equal, then the number is a palindrome.
 *
 * @example
 * Input: 121
 * Output: Palindrome
 *
 * Input: 123
 * Output: Not Palindrome
 *
 * \note This implementation uses integer arithmetic and does not convert to
 * string.
 *
 * @author [Ashutosh kumar](https://github.com/Ashutosh-kumar-06)
 */

#include <cassert>   /// for assert
#include <iostream>  /// for IO operations

/**
 * @namespace math
 * @brief Mathematical algorithms
 */
namespace math {
/**
 * @brief Function to check whether a number is a palindrome.
 * @param n input number
 * @returns 1 if the number is palindrome, otherwise 0
 */
int isPalindrome_number(int n) {
    if (n < 0) {  // negative numbers are not palindromes
        return 0;
    }

    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return (original == reversed) ? 1 : 0;
}
}  // namespace math

/**
 * @brief Self-test implementations
 * @returns void
 */
static void test() {
    std::cout << "Test Case 1... ";
    assert(math::isPalindrome_number(121) == 1);
    std::cout << "Passed!\n";

    std::cout << "Test Case 2... ";
    assert(math::isPalindrome_number(123) == 0);
    std::cout << "Passed!\n";

    std::cout << "Test Case 3... ";
    assert(math::isPalindrome_number(0) == 1);
    std::cout << "Passed!\n";

    std::cout << "Test Case 4... ";
    assert(math::isPalindrome_number(1221) == 1);
    std::cout << "Passed!\n";

    std::cout << "\nAll test cases have successfully passed!\n";
}

/**
 * @brief Optional user input testing
 * @returns void
 */
void user_input_test() {
    int n = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (math::isPalindrome_number(n)) {
        std::cout << n << " is a palindrome number.\n";
    } else {
        std::cout << n << " is not a palindrome number.\n";
    }
}

/**
 * @brief Main function
 * @returns 0 on successful execution
 */
int main() {
    test();  // run self-tests

    // Uncomment to test manually
    // user_input_test();

    return 0;
}
