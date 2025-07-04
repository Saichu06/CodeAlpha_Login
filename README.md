# 🔐 Login & Registration System in C++

This is a simple console-based C++ application that allows users to **register** and **login** using a username and password. User credentials are stored in a local file for persistent access.

---

## 📌 Features

- 📥 **Registration**: 
  - Accepts a unique username and password
  - Checks for duplicate usernames before registration
- 🔐 **Login**: 
  - Verifies credentials against stored user data
  - Displays success or error messages accordingly
- 💾 **File Storage**: 
  - Stores all user credentials in `users.txt`
  - Appends new user records without overwriting

---

## 🧪 How to Run

1. Make sure you have a C++ compiler (e.g., `g++`) installed.
2. Compile the code:
   ```bash
   g++ login_system.cpp -o login_system
Run the executable:

bash
Copy
Edit
./login_system
📂 Project Structure
cpp
Copy
Edit
login_system.cpp     // Source code
users.txt            // Stores username and password data (auto-created)
README.md            // Project instructions and documentation
📝 Sample users.txt (After 2 Registrations)
nginx
Copy
Edit
alice password123
bob mysecurepwd
🔄 Sample Flow
Register:

yaml
Copy
Edit
Enter username: alice
Enter password: password123
✅ Registration successful!
Login:

yaml
Copy
Edit
Enter username: alice
Enter password: password123
✅ Login successful! Welcome, alice!
Invalid Login:

pgsql
Copy
Edit
Enter username: test
Enter password: wrongpass
❌ Login failed. Invalid username or password.
🛠 Requirements
C++11 or above

A terminal or IDE (e.g., CodeBlocks, Visual Studio, VS Code with g++)

🚀 Future Improvements
Password encryption (e.g., SHA-256 or bcrypt)

Hide password input while typing

Allow deleting or updating users

Use JSON or SQLite for structured data

📬 Contact
Feel free to use, modify, and improve this for your learning or mini-project submissions.
