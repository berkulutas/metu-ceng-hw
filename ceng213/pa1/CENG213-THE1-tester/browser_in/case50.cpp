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
Tab A = Tab("z", "xx","gg");
Tab B = Tab("rrr", "ww","y");
Tab C = Tab("ccc", "o","n");
Tab D = Tab("dd", "sss","yy");
Tab E = Tab("y", "ttt","ccc");
Tab F = Tab("www", "vvv","ooo");
Tab G = Tab("k", "ee","tt");
Tab H = Tab("t", "u","dd");
Tab I = Tab("aaa", "iii","h");
Tab J = Tab("ll", "dd","w");
Tab K = Tab("vvv", "x","b");
Tab L = Tab("m", "bb","i");
Tab M = Tab("qqq", "lll","yy");
Tab N = Tab("iii", "s","vv");
Tab O = Tab("ll", "g","nnn");
Tab P = Tab("ddd", "x","sss");
Tab Q = Tab("hhh", "bb","pp");
Tab R = Tab("eee", "ff","lll");
Tab S = Tab("n", "aaa","ll");
Tab T = Tab("ttt", "mmm","i");
Tab U = Tab("p", "ppp","gg");
Tab V = Tab("ttt", "ff","i");
Tab W = Tab("ddd", "v","kk");
Tab X = Tab("sss", "lll","uuu");
Tab Y = Tab("f", "e","i");
Tab Z = Tab("eee", "n","c");
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(A);
a.newTab(B);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(C);
b.newTab(D);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(E);
b.newTab(F);
c.newTab(G);
d.newTab(H);
a.newTab(I);
b.newTab(J);
c.newTab(K);
d.changeActiveTabTo(1);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(L);
d.newTab(M);
a.moveActiveTabTo(4);
b.newTab(N);
c.moveActiveTabTo(4);
d.newTab(O);
a.newTab(P);
b.changeActiveTabTo(1);
c.newTab(Q);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(R);
d.newTab(S);
a.newTab(T);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(U);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.newTab(V);
c.moveActiveTabTo(3);
d.newTab(W);
a.newTab(X);
b.newTab(Y);
c.newTab(Z);
d.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
b.moveActiveTabTo(2);
a.changeActiveTabTo(1);
d.changeActiveTabTo(1);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(2);
a.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(5);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(0);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->print();
brows->closeWindow();
brows->switchToWindow(3);
brows->switchToWindow(8);
brows->switchToWindow(8);
brows->newWindow();
brows->print();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->print();
brows->switchToWindow(6);
brows->switchToWindow(7);
brows->getWindow(3);
brows->newWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(7);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->switchToWindow(6);
brows->getWindow(0);
brows->newWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->print();
brows->print();
brows->print();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->getWindow(4);
brows->newWindow();
brows->print();
brows->switchToWindow(4);
brows->closeWindow();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(3);
brows->print();
brows->getWindow(9);
brows->newWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->switchToWindow(4);
brows->print();
brows->switchToWindow(7);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(9);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(9);
delete brows;
}
	return 0;
};