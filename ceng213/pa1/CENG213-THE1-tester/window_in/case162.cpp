#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(1);
Tab P = Tab("lll", "tt","ttt");
wind->print();
Tab W = Tab("h", "a","h");
wind->changeActiveTabTo(1);
Tab G = Tab("dd", "ff","xxx");
wind->moveActiveTabTo(3);
Tab Z = Tab("rr", "ddd","u");
wind->print();
Tab L = Tab("zzz", "n","aaa");
wind->isEmpty();
Tab B = Tab("cc", "f","k");
wind->isEmpty();
Tab S = Tab("zz", "tt","lll");
wind->closeTab();
Tab T = Tab("ooo", "yyy","f");
wind->getActiveTab();
Tab Q = Tab("ccc", "ff","zzz");
wind->getActiveTab();
wind->changeActiveTabTo(5);
Tab C = Tab("h", "mmm","pp");
wind->closeTab();
Tab R = Tab("ddd", "ww","gg");
wind->newTab(B);
wind->print();
Tab M = Tab("o", "uu","p");
wind->getActiveTab();
Tab N = Tab("ppp", "gg","aa");
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(2);
Tab J = Tab("v", "aaa","pp");
wind->isEmpty();
wind->isEmpty();
Tab A = Tab("hhh", "ddd","sss");
wind->newTab(A);
Tab H = Tab("t", "zz","t");
wind->moveActiveTabTo(2);
Tab V = Tab("bbb", "ff","bb");
wind->print();
wind->getActiveTab();
wind->closeTab();
Tab O = Tab("rrr", "xx","gg");
wind->newTab(C);
Tab Y = Tab("ttt", "kkk","qq");
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
wind->print();
Tab D = Tab("mm", "xxx","uuu");
wind->newTab(D);
wind->moveActiveTabTo(5);
wind->isEmpty();
Tab U = Tab("www", "xxx","i");
wind->isEmpty();
wind->getActiveTab();
wind->newTab(G);
wind->isEmpty();
Tab E = Tab("hhh", "qq","aa");
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(3);
wind->print();
Tab K = Tab("jjj", "l","xxx");
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->closeTab();
wind->isEmpty();
wind->print();
wind->closeTab();
Tab I = Tab("w", "y","hh");
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->newTab(E);
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->newTab(H);
wind->closeTab();
wind->getActiveTab();
Tab X = Tab("bb", "xxx","ddd");
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->closeTab();
wind->newTab(I);
wind->print();
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(5);
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->closeTab();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(4);
wind->closeTab();
Tab F = Tab("s", "p","m");
wind->print();
wind->newTab(F);
wind->changeActiveTabTo(5);
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->print();
wind->newTab(J);
wind->newTab(K);
wind->isEmpty();
wind->isEmpty();
delete wind;
}
	return 0;
};