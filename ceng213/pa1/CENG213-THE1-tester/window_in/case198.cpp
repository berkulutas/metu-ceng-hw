#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->print(); ///


Tab D = Tab("ppp", "ggg","jjj");
wind->getActiveTab();
Tab N = Tab("xxx", "uu","aa");
wind->isEmpty();
Tab X = Tab("ii", "qqq","tt");
wind->newTab(D);
Tab B = Tab("nn", "www","tt");
wind->isEmpty();
Tab W = Tab("n", "dd","nnn");
wind->changeActiveTabTo(1);
Tab E = Tab("qqq", "yyy","eee");
wind->closeTab();
Tab U = Tab("eee", "xx","tt");
wind->closeTab();
wind->closeTab();
Tab R = Tab("pp", "rrr","nn");
wind->closeTab();
Tab T = Tab("ll", "bb","gg");
wind->print();////
Tab F = Tab("hh", "ll","ww");
wind->closeTab();
Tab S = Tab("a", "t","qq");
wind->moveActiveTabTo(3);
wind->newTab(B);
wind->moveActiveTabTo(4);
wind->print(); /// www
wind->getActiveTab();
wind->closeTab();
Tab G = Tab("ss", "c","w");
wind->print(); /// empty
Tab M = Tab("nn", "o","gg");
wind->isEmpty();
Tab A = Tab("fff", "hhh","zz");
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(5);
Tab V = Tab("vv", "zz","xx");
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->print(); /// empty
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->closeTab();
Tab P = Tab("a", "xx","ff");
wind->newTab(A);
wind->newTab(E);
wind->isEmpty();
Tab Q = Tab("zzz", "kkk","pp");
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(3);
wind->closeTab();
Tab J = Tab("t", "uu","l");
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(2);
Tab Y = Tab("k", "ss","xx");
wind->moveActiveTabTo(1);
wind->isEmpty();
Tab K = Tab("ll", "cc","z");
wind->newTab(F);
wind->getActiveTab();
Tab H = Tab("xx", "q","j");
wind->newTab(G);
Tab O = Tab("a", "www","uu");
wind->getActiveTab();
wind->newTab(H);
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(3);
wind->print(); ///3 hhh

/*
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->print(); /// 2 hhh
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->newTab(J);
wind->isEmpty();
wind->newTab(K);
wind->moveActiveTabTo(0);
wind->print(); //// 0 cc
wind->moveActiveTabTo(5); // (5) h c u l q cc
wind->closeTab(); // (4) h c u l q
Tab I = Tab("q", "z","kk");
wind->moveActiveTabTo(4); // (4) h c u l q
wind->getActiveTab();
wind->moveActiveTabTo(0); // (0) q h c u l
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(1); // (1) h q c u l
wind->getActiveTab();
wind->print(); //// farklı
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->newTab(I);
wind->newTab(M);
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(4);
wind->newTab(N);
wind->newTab(O);
wind->getActiveTab();
Tab C = Tab("z", "uu","yyy");
wind->newTab(C);
wind->changeActiveTabTo(3);
wind->print();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(3);
wind->closeTab();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(5);
wind->newTab(P);
wind->closeTab();
wind->moveActiveTabTo(4);
Tab Z = Tab("x", "sss","e");
wind->newTab(Q);
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->closeTab();
wind->changeActiveTabTo(1);
wind->print();
wind->closeTab();
wind->newTab(R);
wind->moveActiveTabTo(1);
*/
delete wind;
}
	return 0;
};