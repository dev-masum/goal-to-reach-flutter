# 📝 C Struct & Union Practice Problems

---

## Problem 1: Student Struct Practice

**Description:**  
Create a **struct** called `Student` with the following members:  
- `id` → student ID (integer)  
- `name` → student name (string)  
- `marks` → student marks (integer)  

**Tasks:**  
1. Input data for **2–3 students**.  
2. Implement a **function** that takes a **pointer to a student struct** and prints their details.  
3. Practice **accessing struct members using pointers**.  

**Goal:**  
- Learn how to **define a struct**, **store data**, and **pass it via pointer**.

---

## Problem 2: Data Union Practice

**Description:**  
Create a **union** called `Data` with the following members:  
- `i` → integer  
- `f` → float  
- `c` → a single character  

**Tasks:**  
1. Input values for **each member separately**, one at a time.  
2. After entering each value, **print all union members** to see what happens.  
3. Use a **pointer to the union** to access and print its value.  

**Goal:**  
- Understand that **a union can only store one value at a time**.  
- Learn how to **take input and access union members via pointers**.  
- Observe **union overwriting behavior**.

---

## Problem 3: Customer Payment System (Struct + Tagged Union)

**Description:**  
Create a program to manage customer payments. Each customer can pay using **either a credit card or PayPal**. Use a **union** to store the payment info and a **paymentType tag** to remember the choice.

---

### Data Structures

- **Union:** Stores either a credit card number or PayPal email.  
- **Struct:** Contains:  
  - `id` → customer ID  
  - `name` → customer name  
  - `paymentType` → 'C' for Credit Card, 'P' for PayPal  
  - `payment` → the union storing the payment

---

### Tasks

1. Input details for **3 customers**.  
2. Store the **chosen payment type** in `paymentType` and the corresponding value in the union.  
3. Implement a **function** that takes a pointer to a customer and prints:  
   - ID  
   - Name  
   - Payment info based on the tag  

4. Print the **size of the union** and **struct** (optional).

---

### Example Run

```
Enter Customer 1 ID: 101
Enter Customer 1 Name: Alice
Choose Payment Method (C = Credit Card, P = PayPal): C
Enter Credit Card Number: 1234-5678-9876-5432
--------------------------
Enter Customer 2 ID: 102
Enter Customer 2 Name: Bob
Choose Payment Method (C = Credit Card, P = PayPal): P
Enter PayPal Email: bob@example.com
--------------------------
Enter Customer 3 ID: 103
Enter Customer 3 Name: Charlie
Choose Payment Method (C = Credit Card, P = PayPal): C
Enter Credit Card Number: 4321-8765-6789-1234
--------------------------

=== Customer Details ===
Customer ID: 101
Customer Name: Alice
Payment (Credit Card): 1234-5678-9876-5432
--------------------------
Customer ID: 102
Customer Name: Bob
Payment (PayPal): bob@example.com
--------------------------
Customer ID: 103
Customer Name: Charlie
Payment (Credit Card): 4321-8765-6789-1234
--------------------------
```

---

### Key Points

- Only **one union member is valid at a time**.  
- Use `paymentType` to know which value to print.  
- Practice **struct + union + pointer access**.  
