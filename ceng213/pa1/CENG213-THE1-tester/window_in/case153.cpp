#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(5);
Tab M = Tab("ooo", "b","b");
wind->closeTab();
Tab G = Tab("ooo", "nn","iii");
wind->newTab(G);
Tab R = Tab("mmm", "ttt","i");
wind->moveActiveTabTo(5);
Tab V = Tab("jj", "ddd","sss");
wind->moveActiveTabTo(1);
Tab Z = Tab("jj", "bb","bbb");
wind->isEmpty();
Tab F = Tab("ddd", "b","ww");
wind->getActiveTab();
Tab H = Tab("ii", "uu","zzz");
wind->closeTab();
Tab C = Tab("oo", "p","xx");
wind->newTab(C);
wind->closeTab();
wind->getActiveTab();
Tab K = Tab("i", "a","ww");
wind->getActiveTab();
Tab D = Tab("ll", "ss","e");
wind->closeTab();
wind->newTab(D);
wind->print();
wind->print();
wind->print();
Tab E = Tab("xx", "s","ll");
wind->changeActiveTabTo(1);
Tab S = Tab("ff", "xxx","b");
wind->moveActiveTabTo(2);
wind->newTab(E);
Tab B = Tab("p", "a","ppp");
wind->getActiveTab();
Tab Y = Tab("f", "y","s");
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->print();
Tab A = Tab("d", "a","hh");
wind->getActiveTab();
wind->closeTab();
wind->print();
Tab P = Tab("u", "yyy","jj");
wind->closeTab();
Tab X = Tab("cc", "fff","ww");
wind->closeTab();
Tab W = Tab("k", "n","yyy");
wind->moveActiveTabTo(1);
wind->newTab(A);
Tab L = Tab("iii", "r","qq");
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(4);
Tab O = Tab("ccc", "mmm","lll");
wind->closeTab();
wind->moveActiveTabTo(2);
wind->newTab(B);
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
Tab U = Tab("ttt", "zz","h");
wind->moveActiveTabTo(2);
wind->closeTab();
wind->print();
wind->moveActiveTabTo(4);
wind->print();
wind->print();
wind->newTab(F);
Tab Q = Tab("bb", "ww","n");
wind->newTab(H);
wind->print();
wind->newTab(K);
wind->moveActiveTabTo(4);
wind->newTab(L);
wind->moveActiveTabTo(0);
wind->closeTab();
wind->print();
wind->newTab(M);
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
Tab N = Tab("www", "p","kk");
wind->print();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->getActiveTab();
Tab J = Tab("zz", "rr","ttt");
wind->getActiveTab();
wind->print();
wind->isEmpty();
wind->closeTab();
wind->getActiveTab();
Tab I = Tab("j", "yyy","w");
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->newTab(I);
wind->changeActiveTabTo(1);
wind->newTab(J);
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(5);
wind->closeTab();
wind->newTab(N);
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->newTab(O);
wind->print();
wind->closeTab();
wind->print();
delete wind;
}
	return 0;
};