// <PROJECT>_<PATH>_<FILE>_H_.
#ifndef TEST_H_
#define TEST_H_

class test {
  public:
    void testSearch(bPlusTree &tree, int version);
    void testRangeSearch(bPlusTree &T);
    void testInsertion(bPlusTree &tree, int version);
    void testDeletetion(bPlusTree &tree);
};

#endif  // TEST_H_