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
Tab A = Tab("l", "j","qq");
Tab B = Tab("pp", "ccc","iii");
Tab C = Tab("bb", "xxx","r");
Tab D = Tab("hh", "sss","f");
Tab E = Tab("c", "sss","w");
Tab F = Tab("ttt", "jjj","ww");
Tab G = Tab("b", "t","l");
Tab H = Tab("q", "jjj","nnn");
Tab I = Tab("ooo", "oo","tt");
Tab J = Tab("jjj", "t","fff");
Tab K = Tab("kkk", "ll","rrr");
Tab L = Tab("yy", "ccc","d");
Tab M = Tab("ff", "bb","t");
Tab N = Tab("aa", "kk","iii");
Tab O = Tab("eee", "c","nn");
Tab P = Tab("ddd", "p","ppp");
Tab Q = Tab("k", "mmm","ss");
Tab R = Tab("o", "v","ddd");
Tab S = Tab("hhh", "sss","ttt");
Tab T = Tab("aa", "v","rr");
Tab U = Tab("vvv", "kk","f");
Tab V = Tab("ccc", "aaa","ee");
Tab W = Tab("sss", "ww","m");
Tab X = Tab("f", "c","f");
Tab Y = Tab("c", "ll","a");
Tab Z = Tab("t", "ww","oo");
a.newTab(A);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(B);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(C);
d.newTab(D);
a.moveActiveTabTo(1);
b.newTab(E);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(F);
b.newTab(G);
c.newTab(H);
d.newTab(I);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(J);
a.newTab(K);
b.newTab(L);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(M);
b.moveActiveTabTo(5);
c.newTab(N);
d.changeActiveTabTo(5);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(O);
d.moveActiveTabTo(4);
a.newTab(P);
b.newTab(Q);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(R);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(S);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(T);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.newTab(U);
c.newTab(V);
d.newTab(W);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(X);
a.newTab(Y);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(Z);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->getWindow(7);
brows->getWindow(5);
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->getWindow(7);
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->print();
brows->newWindow();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->switchToWindow(5);
brows->getWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->getWindow(8);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->newWindow();
brows->switchToWindow(6);
brows->newWindow();
brows->switchToWindow(2);
brows->newWindow();
brows->newWindow();
brows->print();
brows->getWindow(7);
brows->switchToWindow(3);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->mergeAllWindows();
brows->getWindow(0);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->switchToWindow(2);
brows->switchToWindow(2);
brows->switchToWindow(0);
brows->print();
brows->switchToWindow(7);
brows->closeWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->getWindow(9);
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(1);
brows->closeWindow();
brows->print();
brows->switchToWindow(8);
brows->getWindow(3);
brows->switchToWindow(9);
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->getWindow(6);
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->getWindow(3);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->getWindow(0);
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->getWindow(4);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->closeWindow();
brows->getWindow(7);
delete brows;
}
	return 0;
};