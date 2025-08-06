#include "replace.hpp"
#include <iostream>
#include <fstream>
#include <cassert>

void createFile(const std::string& filename, const std::string& content) {
  std::ofstream file(filename);
  file << content;
  file.close();
}

void testCase(const std::string& name, int expected, const std::string& file, const std::string& s1, const std::string& s2) {
  std::cout << "[TEST] " << name << "..." << std::endl;
  int result = findAndReplace(file, s1, s2);
  assert(result == expected);
  std::cout << "Passed.\n\n";
}

int main() {
  std::cout << "--- Running tests ---\n";

  // Test 1: File doesn't exist
  testCase("File does not exist", 1, "nonexistent.txt", "a", "b");

  // Test 2: str1 is empty
  createFile("test_empty_str1.txt", "This is a test");
  testCase("Empty str1", 1, "test_empty_str1.txt", "", "replacement");

  // Test 3: File is empty
  createFile("test_empty.txt", "");
  testCase("Empty file", 1, "test_empty.txt", "a", "b");

  // Test 4: str1 not in file
  createFile("test_not_found.txt", "Hello world!");
  testCase("str1 not in file", 0, "test_not_found.txt", "XYZ", "123");

  // Test 5: str1 == str2
  createFile("test_same_str.txt", "Copy this line. Copy this line.");
  testCase("str1 equals str2", 0, "test_same_str.txt", "Copy", "Copy");

  // Test 6: Normal replacement
  createFile("test_replace.txt", "one two three one two");
  testCase("Normal replacement", 0, "test_replace.txt", "one", "XXXXXX");

  std::cout << "\n--- All tests passed ---\n";
  return 0;
}