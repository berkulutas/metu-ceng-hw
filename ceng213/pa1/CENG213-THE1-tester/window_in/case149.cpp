#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab O = Tab("aaa", "ttt","s");
wind->getActiveTab();
Tab V = Tab("y", "yyy","i");
wind->print();
Tab M = Tab("ss", "z","iii");
wind->changeActiveTabTo(0);
Tab A = Tab("aaa", "g","yy");
wind->isEmpty();
wind->getActiveTab();
Tab I = Tab("cc", "kkk","ccc");
wind->closeTab();
Tab K = Tab("l", "s","ggg");
wind->moveActiveTabTo(3);
Tab C = Tab("b", "oo","rr");
wind->isEmpty();
Tab W = Tab("ff", "ppp","g");
wind->print();
Tab D = Tab("jjj", "ggg","kk");
wind->isEmpty();
wind->newTab(A);
Tab U = Tab("l", "b","xxx");
wind->changeActiveTabTo(0);
Tab Q = Tab("x", "oo","iii");
wind->print();
Tab S = Tab("ddd", "bb","nn");
wind->isEmpty();
Tab N = Tab("xx", "rr","q");
wind->isEmpty();
Tab E = Tab("tt", "uu","y");
wind->getActiveTab();
Tab P = Tab("k", "b","cc");
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(5);
wind->getActiveTab();
Tab Y = Tab("ttt", "ee","zz");
wind->newTab(C);
Tab B = Tab("r", "aa","zzz");
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->isEmpty();
Tab G = Tab("vvv", "ooo","yyy");
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(4);
Tab L = Tab("p", "mmm","aa");
wind->getActiveTab();
Tab X = Tab("bbb", "u","vv");
wind->isEmpty();
wind->changeActiveTabTo(4);
Tab Z = Tab("f", "a","h");
wind->isEmpty();
Tab T = Tab("c", "c","v");
wind->changeActiveTabTo(4);
wind->print();
wind->print();
wind->moveActiveTabTo(1);
Tab H = Tab("h", "g","x");
wind->newTab(B);
wind->newTab(D);
wind->print();
wind->closeTab();
wind->newTab(E);
wind->print();
Tab J = Tab("ttt", "k","n");
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->changeActiveTabTo(2);
wind->print();
Tab F = Tab("l", "u","pp");
wind->newTab(F);
wind->getActiveTab();
wind->isEmpty();
wind->newTab(G);
wind->isEmpty();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->newTab(H);
wind->newTab(I);
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(2);
wind->newTab(J);
wind->print();
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->print();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->print();
wind->closeTab();
wind->isEmpty();
wind->print();
wind->isEmpty();
Tab R = Tab("xxx", "oo","z");
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->newTab(K);
wind->changeActiveTabTo(1);
wind->closeTab();
wind->changeActiveTabTo(0);
wind->closeTab();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(3);
wind->print();
delete wind;
}
	return 0;
};