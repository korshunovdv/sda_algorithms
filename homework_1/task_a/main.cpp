#include <iostream>
#include <fstream>
#include <string>
#include <vector>


std::string input_path = "input.txt";
std::string output_path = "output.txt";

std::vector<int> convertToVector (std::string input_file) {
	std::ifstream input(input_file);
	long size;
	long digit;
    input >> size;
	std::vector<int> array;
	for (int i = 0; i < size; ++i) {
		input >> digit;
		array.push_back(digit);
	}
	return array;
}

void writeAnswer (const std::vector <int> &array, const std::string output_file){
	std::ofstream output(output_file);
	for (const auto &digit: array) {
	output << digit << ' ';
	}
	output << std::endl;
}

std::vector <int> findLongestSubsequence (const std::vector <int> &array) {
	return array;
}

std::string testFindLongestSubsequence (const std::vector <int> &array, const std::vector <int> &answer, int test_num) {
	bool test_result = findLongestSubsequence (array) == answer;
	if (test_result == 0) {
		return "Test " + std::to_string(test_num) + " failed!";
	} else {
		return "Test " + std::to_string(test_num) + " passed!";
	}
}

void Test () {
	std::cout <<  testFindLongestSubsequence({1, 4, 2, 3, 5, 8, 6, 7, 9, 10}, {1, 4, 2, 8, 6, 7}, 1) << std::endl;
	std::cout <<  testFindLongestSubsequence({1, 2, 3, 4, 5}, {1, 2}, 2) << std::endl;
	std::cout <<  testFindLongestSubsequence({100}, {100}, 3) << std::endl;
	std::cout <<  testFindLongestSubsequence({3, 2, 1}, {3, 2}, 4) << std::endl;
}

int main() {
	// std::vector <int> array = convertToVector(input_path);
	// std::vector <int> longest_subsequence = findLongestSubsequence(array);
	// writeAnswer(longest_subsequence, output_path);
	Test ();
}
