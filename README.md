# 0x00-Fix_My_Code_Challenge

Fixing bugs in existing codebases across multiple languages.

## Tasks

### 0. FizzBuzz
Fixed the FizzBuzz logic in `challenge/0-fizzbuzz.py`. The original code checked
`(i % 3) == 0` before the combined `(i % 3) == 0 and (i % 5) == 0` condition,
so multiples of 15 were caught by the "Fizz" branch first and "FizzBuzz" was
never reached. Reordered the conditions so the combined check runs first.
