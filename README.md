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
