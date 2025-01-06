
#include <iostream>




int main(int argc, char** argv)
{
	const int ROWS = 3;
	const int COLS = 5;

	const char* grid2D[ROWS][COLS] =
	{
		{ "a0", "a1", "a2", "a3", "a4" },
		{ "b0", "b1", "b2", "b3", "b4" },
		{ "c0", "c1", "c2", "c3", "c4" },
	};


	// Task 1:
	// Print all values in the grid using nested loops to iterate over rows and columns.
	// Expected output:
	//		a0, a1, a2, a3, a4, 
	//		b0, b1, b2, b3, b4,
	//		c0, c1, c2, c3, c4,
	// ------------------------------------------------------------------------
	int i =0;
	int j =0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
		 std::cout << grid2D[i][j] << "\t";

		 if (j == COLS - 1) 
		 {
			 std::cout << "" << std::endl;
		 }

		}


	}



	// ------------------------------------------------------------------------







	// Task 2:
	// Print all values in the grid using a single loop
	// Expected output:
	//		a0, a1, a2, a3, a4, b0, b1, b2, b3, b4, c0, c1, c2, c3, c4,
	// ------------------------------------------------------------------------
		std::cout << "" << std::endl;
		int primaryColumnIndex = 0;
		int primaryRowIndex = 0;
	for (int index = 0; index < ROWS * COLS; index++)
	{
		// TODO: convert "index" to a "rowIndex" and "colIndex" value
		if (index > 0)
		{
          primaryRowIndex = index % index;
		}
		
		int secondaryRowIndex = primaryRowIndex;
		if (index == COLS || (index < COLS * 2 && index >= COLS))
		{
			secondaryRowIndex++;
		}
		else if (index == COLS*2 || (index > COLS*2 && index <= COLS*ROWS))
		{
			secondaryRowIndex+=2;
		}

		if ((index >= 1 && index <= 4) || (index >= 6 && index <= 9) || (index >= 11 && index <= 14))
		{
			primaryColumnIndex++;
		}

        
		if ((index == COLS) || (index == COLS * 2))
		{
			primaryColumnIndex = 0;
		}

		// use the resulting row and column index to print the value

		std::cout << grid2D[secondaryRowIndex][primaryColumnIndex] << ", ";
		
	}

	// ------------------------------------------------------------------------


	const char* grid1D[ROWS*COLS] =
	{
		"a0", "a1", "a2", "a3", "a4",
		"b0", "b1", "b2", "b3", "b4",
		"c0", "c1", "c2", "c3", "c4"
	};

	// Task 3:
	// using a nested loop to iterate over rows/columns
	// convert the row and column index to a single index value to print the values
	// of grid1D
	// Expected output:
	//		a0, a1, a2, a3, a4, 
	//		b0, b1, b2, b3, b4,
	//		c0, c1, c2, c3, c4,
	// ------------------------------------------------------------------------

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	for (int rowIndex = 0; rowIndex < ROWS; rowIndex++)
	{
		for (int colIndex = 0; colIndex < COLS; colIndex++)
		{
			// TODO: calculate "index" based on rowIndex/colIndex value
			int index = colIndex;
			if (rowIndex == 1)
			{
				index = colIndex + COLS;
			}
			else if (rowIndex == 2)
			{
				index = colIndex + (COLS * 2);
			}
			
			

			// use the resulting index to print the value
			std::cout << grid1D[index] << ", ";
		}
		std::cout << std::endl;
	}

	// ------------------------------------------------------------------------

}

