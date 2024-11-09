### PCBuilderSystem Overview

**Project Features:**
- Users enter a budget and select components (CPU, Motherboard, RAM, GPU, Storage, Casing).
- The program adds prices of selected components, compares the total with the budget, and notifies if it's within budget.

**Code Walkthrough:**
1. **Budget Input**: User enters a budget in USD.
2. **Category Selection**: A loop lets users choose components until they exit.
3. **Component Selection**: Each category has 3 options (cheap, mid-range, expensive).
4. **Price Calculation**: Prices are added to the total cost.
5. **Budget Check**: Compares the total with the budget and shows the result.

**Pros:**
- **Simple & User-Friendly**: Clear, interactive menu.
- **Well-Structured**: Organized using a switch statement and loops.
- **Expandable**: Easy to add new components or categories.
- **Budget Handling**: Correctly checks if the user is within budget.

**Cons:**
- **Limited Choices**: Only 3 options per category.
- **No Error Handling for Budget Input**: Invalid or non-numeric budget inputs are not handled.
- **No Data Persistence**: Does not save user selections for later.
- **No GUI**: Only text-based interface.
- **Hard-Coded Prices**: Prices are fixed and require code modification to update.

**Areas for Improvement:**
1. **Input Validation**: Handle invalid or negative budget inputs.
2. **GUI Development**: Use frameworks like Qt for a better user interface.
3. **Advanced Features**: 
   - Compatibility checks for components.
   - Real-time price updates via API.
   - Saving and loading builds.
4. **External Data Management**: Store product prices in external files for easy updates.

**Time Complexity**:  
- **O(n)**: The time complexity is linear due to user input-driven loops.
- **Space Complexity**: **O(1)** as the program uses a fixed amount of space.

**Developer Consideration:**
- **Pros**: Simple, easy to customize, good for beginners.
- **Cons**: Scalability issues, lack of error handling, and repetitive code.

**Conclusion**:  
The program serves as a basic prototype but needs improvements in error handling, scalability, and UI. A more modular and feature-rich approach would make it production-ready.
