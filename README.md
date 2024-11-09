# PCBuilderSystem
PCBuilderSystem is a C++ program that helps users build a custom PC by selecting components like CPU, motherboard, RAM, GPU, storage, and casing. It calculates the total cost and checks if it fits within the user’s budget, with error handling for invalid selections and a user-friendly interface.
Here’s a detailed description of your **PC Builder System** code, along with pros, cons, and areas where help might be needed:

### **Project Description**
### **Features**
- The user enters a budget in USD.
- The system prompts the user to select parts from each category (Processor, Motherboard, RAM, GPU, Storage, and Casing).
- Based on the user's selection, the price of the selected components is added to the total cost.
- The program calculates the total cost of the selected components and compares it with the user’s budget.
- If the total cost is within the budget, a message confirms it. Otherwise, it indicates that the budget has been exceeded.

### **Code Walkthrough**
1. **Budget Input**: The program first asks the user to input their budget in USD.
2. **Category Selection**: A `do-while` loop runs to repeatedly ask the user to select a component category (CPU, Motherboard, etc.) until the user chooses to exit by inputting `0`.
3. **Component Selection**: For each category, the program presents three options at different price points (cheap, mid-range, expensive). The user selects a component by entering a number corresponding to their choice.
4. **Price Assignment**: The system assigns the price based on the user's selection, and the price is added to the respective category’s total cost.
5. **Final Cost Calculation**: After the user finishes selecting components, the total cost is calculated by summing the prices of all selected components.
6. **Budget Comparison**: The total cost is compared to the user’s budget, and the result is displayed (whether the user is within their budget or not).

### **Pros of the Code**
1. **Simple and User-Friendly**:
   - The interactive menu provides a clear, step-by-step guide for users to select components.
   - The program is easy to use and provides helpful feedback to users during selection.
   
2. **Well-Structured**:
   - The use of a `switch` statement to handle component selection makes the code organized and easy to follow.
   - The loop allows for repeated selections, and the code is modular with respect to each component category.

3. **Flexible and Expandable**:
   - The program could be expanded easily by adding more categories or more product options within existing categories (e.g., adding more CPU or GPU models).
   - You can add more logic, such as incorporating different pricing for users in different countries or adding additional features like product descriptions or specifications.

4. **Budget Handling**:
   - The program effectively checks whether the total cost exceeds the user’s budget, which is one of the core functionalities of the system.

### **Cons of the Code**
1. **Limited Product Options**:
   - The system only offers a limited number of products in each category (three for each), making it less useful for users who want a broader selection of components.
   - The choices are hard-coded, and the user cannot add their own components or search for specific items outside of the provided list.

2. **No Error Handling for Invalid Budget Input**:
   - If the user inputs a non-numeric value or a negative budget, the program will not handle this case and may lead to unexpected behavior.
   - This can be improved by adding input validation to ensure the budget entered is a valid positive number.

3. **Lack of Data Persistence**:
   - The system does not store the user’s selection history or allow saving and loading of the selected PC build. Users cannot review their previous choices or resume a selection once they exit the program.
   
4. **No GUI or Advanced Features**:
   - The system is text-based, which may be limiting for some users. A graphical user interface (GUI) would make the program more user-friendly and visually appealing.
   - The program is simple and does not include advanced features such as component compatibility checks, recommended builds, or integration with online stores for real-time price updates.

5. **Hard-Coded Prices**:
   - Prices for components are hard-coded, meaning any price change would require modifying the source code. It would be better to store prices in a database or external configuration file so that updates can be made without altering the code itself.

### **Areas Where Help is Needed**
1. **Error Handling for User Input**:
   - Help is needed to implement input validation for the budget, ensuring that the user inputs only valid numbers (no letters or negative values). This can be done using a function to check input before proceeding.
   
2. **Improving User Interface**:
   - The program currently uses a text-based interface. Help in converting this into a graphical user interface (GUI) using a framework like **Qt** or **SFML** would improve user interaction.
   - Suggestions on how to design and structure a GUI for component selection and budget display would be appreciated.

3. **Adding More Advanced Features**:
   - Assistance is needed to implement additional features such as:
     - **Component Compatibility Check**: Ensuring that the selected components are compatible with each other (e.g., ensuring the motherboard supports the chosen CPU).
     - **Real-time Price Updates**: Integrating with an API to get real-time prices for components rather than hard-coding them into the program.
     - **Build Saving and Loading**: Enabling users to save their PC build and reload it later.

4. **Performance Optimization**:
   - While this program is small and efficient, if you want to expand it significantly (with many more component categories or products), you might need advice on how to optimize the program’s performance.

5. **Price List Management**:
   - Help is needed to separate the product prices into an external file (such as a JSON, XML, or CSV file), so the system can read product data dynamically rather than being hardcoded.

# **Future Improvements**
1. **Dynamic Pricing**: 
   - Connect to external databases or websites that offer real-time component prices so users can select components with current prices.
   
2. **Component Compatibility Checks**:
   - Add logic to check that selected components (e.g., CPU, motherboard, RAM) are compatible with each other.

3. **Multiple User Profiles**:
   - Allow users to save their PC builds and view multiple profiles, enabling them to compare different builds and track spending.

4. **Advanced Features**:
   - Add features like a shopping list, automatic tax and shipping cost calculation, or a feature that suggests the best components within the given budget.


  The time complexity analysis of PC Builder System program can be broken down as follows:

### Time Complexity: 
### **Time Complexity for New Developers: A Concise Explanation**

Time complexity is a measure of how the execution time of an algorithm changes as the input size increases. It's usually expressed using **Big O notation**, which describes the worst-case scenario for an algorithm’s performance.

- **O(1)**: Constant time — Execution time does not depend on input size.
- **O(n)**: Linear time — Execution time increases linearly with input size.
- **O(n²)**: Quadratic time — Execution time grows quadratically with input size.

### **Why Companies Prefer Lower Time Complexity**

Companies and developers prefer programs with lower time complexity because they run faster, especially as the input size grows. Efficient algorithms reduce the load on system resources and scale better, making them ideal for real-world applications. Lower time complexity (like **O(1)** or **O(n)**) results in better performance, faster response times, and an overall smoother user experience. 

### **Example:**
my code’s time complexity is **O(1)**, meaning its performance is constant regardless of the number of categories or choices available. This makes it efficient and highly scalable. 

For instance, a program that adds more categories or options without affecting the performance is preferred in industries with high data volumes or fast-paced environments. 

**My  Program's Complexity:**  
- **Main Loop**: The `do-while` loop continues to prompt the user for input until they exit (by entering `0`). In each iteration, the program offers a selection of categories (1-6) and handles the corresponding input. The loop itself runs for at most `n` iterations, where `n` is the number of categories selected before the user exits. Therefore, the time complexity of the loop is **O(n)**.

- **Switch Case (Category Selection)**: Each category selection (1-6) involves checking the input and then displaying the available options, which requires constant time. For each category, there is a further prompt to select a component, with 3 possible options. The complexity for each case is **O(1)** since it only involves simple checks and assignments.

- **Total Time Complexity**: Since each iteration of the loop involves a constant amount of work (due to the switch case), the overall time complexity is **O(n)**, where `n` is the number of iterations (i.e., how many times the user chooses a category and makes a selection). The time complexity is linear with respect to the number of selections.

### Space Complexity:
The space complexity is **O(1)** because the program uses a fixed number of variables (`propPrice`, `mtbpPrice`, `mempPrice`, `gcpPrice`, `strpPrice`, `csgpPrice`, and others) to store the prices and user input, regardless of the size of the input. Therefore, the space required does not grow with the input size.



In summary, the time complexity of my program is **O(n)**, where `n` is the number of user selections (iterations), and the space complexity is **O(1)** since the program uses a constant amount of space.

  ### Developer Consideration:

#### **Would a Developer Consider This?**
Yes, a developer would likely consider this code as a simple and effective way to build an interactive system for selecting computer components. However, there are some aspects to consider before using it in production or as part of a larger project.

#### **Pros:**
1. **Simplicity and Clarity**: The code is straightforward, making it easy to understand for beginners.
2. **User-friendly**: It allows the user to interact with the system in a clear, intuitive manner by making selections from a list of available components.
3. **Customizable**: It’s easy to update the components or prices in the future.

#### **Cons:**
1. **Scalability**: If the number of components or categories increases significantly, the program could become harder to manage. Adding new categories would require modifying the code for each option in the switch-case block. This could make the code less maintainable.
2. **Lack of Error Handling**: The error handling for invalid input is minimal, which could lead to user confusion. For instance, if the user inputs an invalid number or a non-numeric value, the program might behave unexpectedly.
3. **No Input Validation for Budget**: There's no validation for the budget input. If the user enters a non-numeric value, it could cause issues or crashes.
4. **Repetitive Code**: The structure for each category selection is nearly identical. A more scalable solution might involve using arrays or structures to store prices and choices, reducing the redundancy in the code.

#### **Conclusion:**
While the program is easy to understand and could serve as a basic prototype for a PC Builder system, a developer would consider optimizing it for scalability, maintainability, and robustness, especially for more complex systems. Implementing features like input validation, error handling, and refactoring the code for modularity would make it more production-ready.
