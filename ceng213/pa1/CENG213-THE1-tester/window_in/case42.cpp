#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab D = Tab("aa", "ggg","j");
wind->print();
Tab G = Tab("c", "k","u");
wind->closeTab();
Tab J = Tab("fff", "rrr","vv");
wind->getActiveTab();
Tab Z = Tab("cc", "cc","ee");
wind->print();
Tab P = Tab("zzz", "i","ll");
wind->closeTab();
Tab C = Tab("w", "aa","v");
wind->moveActiveTabTo(5);
wind->closeTab();
Tab I = Tab("hh", "jj","u");
wind->changeActiveTabTo(5);
Tab S = Tab("kk", "ff","xxx");
wind->isEmpty();
Tab K = Tab("xxx", "iii","ii");
wind->newTab(C);
wind->moveActiveTabTo(0);
Tab W = Tab("ff", "gg","x");
wind->getActiveTab();
Tab A = Tab("jjj", "kk","v");
wind->isEmpty();
Tab F = Tab("f", "u","nnn");
wind->isEmpty();
Tab T = Tab("n", "ooo","y");
wind->moveActiveTabTo(3);
Tab X = Tab("e", "rrr","nn");
wind->getActiveTab();
wind->print();
wind->getActiveTab();
Tab N = Tab("lll", "bbb","mmm");
wind->isEmpty();
Tab Q = Tab("m", "xxx","b");
wind->getActiveTab();
wind->newTab(A);
wind->isEmpty();
Tab B = Tab("zz", "ddd","www");
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
Tab H = Tab("l", "bbb","oo");
wind->changeActiveTabTo(2);
wind->print();
Tab M = Tab("ggg", "ss","nnn");
wind->newTab(B);
wind->getActiveTab();
wind->print();
wind->newTab(D);
wind->print();
wind->closeTab();
Tab Y = Tab("oo", "i","sss");
wind->getActiveTab();
Tab V = Tab("q", "aaa","v");
wind->isEmpty();
wind->closeTab();
wind->print();
wind->moveActiveTabTo(1);
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
Tab R = Tab("x", "o","pp");
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(3);
Tab E = Tab("v", "u","x");
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->print();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->getActiveTab();
Tab L = Tab("aa", "uuu","q");
wind->moveActiveTabTo(1);
Tab O = Tab("dd", "pp","yy");
wind->isEmpty();
wind->print();
wind->newTab(E);
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(5);
wind->closeTab();
wind->newTab(F);
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(5);
wind->newTab(G);
Tab U = Tab("zz", "a","w");
wind->print();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(4);
wind->closeTab();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(1);
wind->print();
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(0);
wind->newTab(H);
wind->getActiveTab();
wind->moveActiveTabTo(5);
delete wind;
}
	return 0;
};