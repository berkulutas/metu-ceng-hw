#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab Y = Tab("lll", "bbb","u");
wind->changeActiveTabTo(1);
Tab B = Tab("ccc", "uuu","ccc");
wind->closeTab();
Tab C = Tab("n", "lll","hh");
wind->print();
Tab G = Tab("ppp", "i","k");
wind->getActiveTab();
Tab K = Tab("ppp", "ss","nn");
wind->getActiveTab();
Tab A = Tab("kk", "q","t");
wind->isEmpty();
Tab Z = Tab("jjj", "kkk","s");
wind->moveActiveTabTo(2);
Tab E = Tab("aaa", "b","b");
wind->isEmpty();
Tab D = Tab("kk", "cc","mmm");
wind->print();
wind->changeActiveTabTo(1);
wind->newTab(A);
Tab U = Tab("zzz", "cc","ppp");
wind->newTab(B);
Tab F = Tab("t", "ttt","v");
wind->getActiveTab();
Tab W = Tab("dd", "nn","m");
wind->print();
wind->changeActiveTabTo(1);
Tab I = Tab("ddd", "aa","sss");
wind->newTab(C);
wind->getActiveTab();
Tab R = Tab("mm", "dd","y");
wind->newTab(D);
wind->newTab(E);
wind->closeTab();
Tab Q = Tab("ll", "mmm","x");
wind->getActiveTab();
wind->isEmpty();
Tab J = Tab("uu", "d","q");
wind->newTab(F);
wind->getActiveTab();
wind->print();
Tab S = Tab("oo", "ooo","qqq");
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->newTab(G);
wind->closeTab();
wind->print();
Tab N = Tab("x", "c","g");
wind->closeTab();
Tab X = Tab("zz", "qqq","sss");
wind->closeTab();
wind->closeTab();
wind->print();
wind->closeTab();
Tab T = Tab("zz", "ww","xxx");
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(2);
Tab M = Tab("yyy", "iii","ggg");
wind->print();
wind->print();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->print();
wind->isEmpty();
Tab V = Tab("y", "vv","ll");
wind->moveActiveTabTo(3);
wind->print();
wind->closeTab();
Tab O = Tab("b", "yyy","uuu");
wind->print();
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
Tab H = Tab("dd", "z","kk");
wind->print();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->newTab(H);
wind->newTab(I);
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(1);
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->moveActiveTabTo(3);
wind->newTab(J);
Tab P = Tab("qq", "qqq","vv");
wind->newTab(K);
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(5);
wind->newTab(M);
wind->changeActiveTabTo(2);
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->newTab(N);
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(0);
wind->getActiveTab();
Tab L = Tab("rrr", "o","aa");
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(0);
wind->print();
wind->closeTab();
wind->closeTab();
wind->print();
wind->print();
wind->newTab(L);
delete wind;
}
	return 0;
};