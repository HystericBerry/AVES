#ifndef DISJOINT__SET__H
#define DISJOINT__SET__H
#include <iostream>
#include <list>


template <class T> class DisjointSet {
public:
   static int mNumSets;
   DisjointSet() : mNode(nullptr), mRank(0) { ++mNumSets; }
   DisjointSet(T* t) : mNode(t), mRank(0) { std::cout << "Constructing Disjoint Set\n"; ++mNumSets; }
   ~DisjointSet() {
      std::cout << "Destroying Disjoint Set\n";
      delete mNode;
      --mNumSets;
   }

   /*Insert Path Compression Here*/
   void unionSet(const T& obj) {

   }

   /*Insert Path Compression Here*/
   bool findSet(const T& obj) {

   }

   /*Insert Path Compression Here*/
   int getRank() const { return mRank; }

private:
   DisjointSet* mParent;
   std::list<DisjointSet*> mSubset;
   char mRank;
   T* mNode;
};

#endif;