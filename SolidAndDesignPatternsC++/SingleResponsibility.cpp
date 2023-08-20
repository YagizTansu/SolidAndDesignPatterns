#include <iostream>
#include <vector>

class Journal{
public:
	std::string title;
	std::vector<std::string> entries;
	Journal(const std::string title) : title(title) {};

	void add_entry(std::string entry) {
		static int count = 0;
		entries.push_back(entry);
	}
};

class PersisenceManager
{
public:
	void save(Journal& journal,const std::string& filename) {}
};

//int main() {
//	Journal journal{"Dear Diary"};
//
//	journal.add_entry("entry1");
//	journal.add_entry("entry1");
//	
//	PersisenceManager pm;
//	pm.save(journal,"file1");
//
//	return 0;
//}