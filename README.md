# `Simple_SHA256`
 This is a simple C++ program that takes an input string from the user and computes its SHA256 hash using OpenSSL.
---

# `Features`
 - Accepts user input from the console.
 - Computes SHA256 hash using OpenSSL.
 - Displays the hash in hexadecimal format.
---

# `Requirements`
 - C++ compiler (e.g., g++)
 - OpenSSL development libraries installed
---

# `Example Output`
```bash
Enter a string to hash using SHA256: Hello123
SHA256 hash of "Hello123":
1ad8b9e77c93d2149637c21ad61b0beff86b6a34cc0e546139db0d1cf0c932e0

Enter a string to hash using SHA256: 0
SHA256 hash of "0":
5feceb66ffc86f38d952786c6d696c79c2dbc239dd4e91b46729d73a27fb57e9
```
---

# `Note`
This program uses SHA256 from OpenSSL. The same input will always generate the same hash (i.e., it's deterministic).
---
