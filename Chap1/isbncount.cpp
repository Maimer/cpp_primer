#include <iostream>
#include "Sales_item.h"

int main () {
	Sales_item book, currentBook;

	if (std::cin >> currentBook) {
		int count = 1;
		while (std::cin >> book) {
			if (book.isbn() == currentBook.isbn())
				++count;
			else {
				std::cout << currentBook.isbn() << " has " << count << " number of transactions." << std::endl;
				currentBook = book;
				count = 1;
			}
		}
		std::cout << currentBook.isbn() << " has " << count << " number of transactions." << std::endl;
	}
	return 0;
}