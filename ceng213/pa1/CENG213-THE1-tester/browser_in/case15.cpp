#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("ll", "ee","uuu");
Tab B = Tab("w", "ddd","xx");
Tab C = Tab("ddd", "sss","ggg");
Tab D = Tab("rrr", "w","c");
Tab E = Tab("pp", "tt","ccc");
Tab F = Tab("q", "n","eee");
Tab G = Tab("f", "dd","xxx");
Tab H = Tab("ggg", "tt","mm");
Tab I = Tab("ll", "uuu","ggg");
Tab J = Tab("qq", "ff","iii");
Tab K = Tab("e", "k","vv");
Tab L = Tab("i", "nnn","www");
Tab M = Tab("m", "zzz","ss");
Tab N = Tab("iii", "ttt","ll");
Tab O = Tab("www", "cc","x");
Tab P = Tab("vvv", "t","sss");
Tab Q = Tab("ttt", "mmm","lll");
Tab R = Tab("eee", "sss","ttt");
Tab S = Tab("hhh", "y","rrr");
Tab T = Tab("s", "k","y");
Tab U = Tab("nn", "c","rrr");
Tab V = Tab("z", "ee","dd");
Tab W = Tab("w", "vv","d");
Tab X = Tab("s", "q","ttt");
Tab Y = Tab("qqq", "y","vvv");
Tab Z = Tab("qq", "i","tt");
a.newTab(A);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(B);
d.newTab(C);
a.newTab(D);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(E);
a.newTab(F);
b.newTab(G);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(H);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(I);
a.newTab(J);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(K);
b.moveActiveTabTo(3);
c.newTab(L);
d.changeActiveTabTo(3);
a.newTab(M);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(N);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(O);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(P);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(Q);
d.newTab(R);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(S);
d.moveActiveTabTo(2);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(T);
d.changeActiveTabTo(0);
a.newTab(U);
b.moveActiveTabTo(4);
c.newTab(V);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(W);
d.newTab(X);
a.newTab(Y);
b.newTab(Z);
c.changeActiveTabTo(2);
d.newTab(Z);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
d.changeActiveTabTo(1);
d.moveActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(1);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(5);
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(4);
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->print();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(1);
brows->newWindow();
brows->newWindow();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(0);
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(0);
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(9);
brows->getWindow(7);
brows->mergeAllWindows();
brows->getWindow(6);
brows->switchToWindow(1);
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(8);
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(4);
brows->getWindow(5);
brows->closeWindow();
brows->getWindow(4);
brows->switchToWindow(8);
brows->print();
brows->getWindow(4);
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->getWindow(9);
brows->switchToWindow(3);
brows->switchToWindow(6);
brows->getWindow(3);
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(6);
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->newWindow();
brows->getWindow(1);
brows->print();
brows->mergeAllWindows();
brows->getWindow(9);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(8);
delete brows;
}
	return 0;
};