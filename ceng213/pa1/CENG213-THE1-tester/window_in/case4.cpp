#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab G = Tab("uu", "ff","tt");
wind->moveActiveTabTo(4);
Tab J = Tab("sss", "mm","l");
wind->isEmpty();
Tab Z = Tab("rrr", "u","ee");
wind->getActiveTab();
Tab I = Tab("www", "x","f");
wind->isEmpty();
Tab R = Tab("fff", "o","ccc");
wind->print();
Tab N = Tab("k", "xxx","iii");
wind->changeActiveTabTo(3);
Tab H = Tab("ss", "ii","mm");
wind->moveActiveTabTo(1);
Tab Q = Tab("ttt", "zz","rrr");
wind->newTab(G);
Tab S = Tab("y", "bbb","ww");
wind->getActiveTab();
Tab A = Tab("b", "y","ppp");
wind->isEmpty();
Tab C = Tab("t", "nn","i");
wind->closeTab();
Tab O = Tab("ll", "x","m");
wind->isEmpty();
Tab M = Tab("kkk", "ttt","ff");
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(2);
Tab E = Tab("zzz", "dd","j");
wind->getActiveTab();
wind->newTab(A);
wind->getActiveTab();
wind->moveActiveTabTo(4);
Tab D = Tab("z", "fff","qqq");
wind->getActiveTab();
Tab K = Tab("e", "h","ggg");
wind->print();
wind->moveActiveTabTo(2);
Tab F = Tab("f", "uuu","d");
wind->moveActiveTabTo(0);
Tab X = Tab("ddd", "m","qq");
wind->print();
wind->isEmpty();
wind->print();
wind->newTab(C);
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->newTab(D);
wind->closeTab();
wind->newTab(E);
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(4);
Tab L = Tab("r", "p","rrr");
wind->newTab(F);
Tab V = Tab("b", "c","fff");
wind->changeActiveTabTo(0);
Tab Y = Tab("x", "vvv","c");
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(5);
wind->newTab(H);
wind->isEmpty();
Tab B = Tab("ooo", "uu","gg");
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(1);
wind->getActiveTab();
Tab U = Tab("nnn", "t","aa");
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->print();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(1);
wind->newTab(B);
wind->print();
wind->moveActiveTabTo(3);
Tab P = Tab("t", "kkk","hh");
wind->moveActiveTabTo(5);
Tab W = Tab("yyy", "r","r");
wind->newTab(I);
wind->print();
wind->newTab(J);
wind->print();
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(1);
wind->print();
wind->print();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->newTab(K);
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->newTab(L);
wind->changeActiveTabTo(2);
wind->closeTab();
wind->getActiveTab();
wind->newTab(M);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->print();
wind->closeTab();
wind->isEmpty();
wind->closeTab();
delete wind;
}
	return 0;
};