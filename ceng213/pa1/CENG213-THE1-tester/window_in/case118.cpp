#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab O = Tab("k", "nnn","dd");
wind->changeActiveTabTo(1);
Tab E = Tab("qq", "mmm","l");
wind->newTab(E);
Tab B = Tab("xxx", "uu","a");
wind->isEmpty();
wind->print();
wind->isEmpty();
Tab U = Tab("dd", "c","tt");
wind->getActiveTab();
Tab W = Tab("sss", "x","ccc");
wind->changeActiveTabTo(2);
Tab F = Tab("bbb", "z","zz");
wind->print();
Tab P = Tab("ooo", "ppp","dd");
wind->isEmpty();
Tab I = Tab("xx", "v","v");
wind->closeTab();
Tab D = Tab("lll", "v","mmm");
wind->moveActiveTabTo(1);
wind->isEmpty();
Tab A = Tab("nnn", "r","iii");
wind->changeActiveTabTo(4);
Tab Y = Tab("ttt", "n","h");
wind->closeTab();
Tab M = Tab("yyy", "cc","c");
wind->isEmpty();
Tab L = Tab("vvv", "z","c");
wind->newTab(A);
wind->getActiveTab();
Tab Q = Tab("ccc", "bbb","qq");
wind->changeActiveTabTo(0);
wind->isEmpty();
Tab R = Tab("qqq", "b","ttt");
wind->getActiveTab();
Tab H = Tab("rrr", "eee","hh");
wind->newTab(B);
Tab V = Tab("c", "bb","ii");
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->print();
wind->print();
wind->moveActiveTabTo(3);
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(5);
wind->print();
Tab C = Tab("q", "hh","oo");
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
Tab Z = Tab("nnn", "iii","t");
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(0);
wind->closeTab();
Tab K = Tab("bb", "xxx","ll");
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->print();
Tab S = Tab("h", "aaa","nn");
wind->moveActiveTabTo(4);
Tab G = Tab("rr", "www","rrr");
wind->print();
wind->print();
wind->getActiveTab();
Tab T = Tab("u", "qqq","zz");
wind->newTab(C);
wind->newTab(D);
wind->isEmpty();
wind->moveActiveTabTo(4);
Tab X = Tab("q", "rr","ff");
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->print();
wind->print();
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->newTab(F);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(3);
wind->print();
wind->changeActiveTabTo(1);
wind->closeTab();
wind->print();
wind->newTab(G);
wind->print();
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(2);
wind->newTab(H);
wind->newTab(I);
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->isEmpty();
Tab J = Tab("hhh", "jj","ii");
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(4);
wind->print();
wind->getActiveTab();
wind->newTab(J);
wind->print();
Tab N = Tab("jj", "f","b");
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(2);
delete wind;
}
	return 0;
};