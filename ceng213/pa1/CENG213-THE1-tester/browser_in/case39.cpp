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
Tab A = Tab("vvv", "mm","nnn");
Tab B = Tab("ttt", "bb","bb");
Tab C = Tab("p", "i","zz");
Tab D = Tab("uu", "oo","ttt");
Tab E = Tab("y", "rrr","ppp");
Tab F = Tab("s", "m","ttt");
Tab G = Tab("ww", "v","ee");
Tab H = Tab("ttt", "yy","jj");
Tab I = Tab("vvv", "ss","g");
Tab J = Tab("aaa", "oo","qqq");
Tab K = Tab("q", "ss","jjj");
Tab L = Tab("p", "x","iii");
Tab M = Tab("qq", "zz","h");
Tab N = Tab("ww", "r","www");
Tab O = Tab("mmm", "xx","o");
Tab P = Tab("ff", "eee","k");
Tab Q = Tab("d", "x","ddd");
Tab R = Tab("r", "r","yyy");
Tab S = Tab("hh", "bb","ggg");
Tab T = Tab("ppp", "vvv","jj");
Tab U = Tab("qqq", "rr","zzz");
Tab V = Tab("jj", "b","yyy");
Tab W = Tab("qq", "bb","aa");
Tab X = Tab("ww", "v","mmm");
Tab Y = Tab("jjj", "l","uu");
Tab Z = Tab("d", "t","kkk");
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(A);
d.changeActiveTabTo(2);
a.newTab(B);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(C);
d.newTab(D);
a.newTab(E);
b.moveActiveTabTo(0);
c.newTab(F);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.newTab(G);
c.moveActiveTabTo(0);
d.newTab(H);
a.newTab(I);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(J);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(K);
b.newTab(L);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(M);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(N);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.newTab(O);
b.newTab(P);
c.newTab(Q);
d.changeActiveTabTo(1);
a.newTab(R);
b.newTab(S);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(T);
a.newTab(U);
b.moveActiveTabTo(3);
c.newTab(V);
d.changeActiveTabTo(3);
a.newTab(W);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(X);
a.moveActiveTabTo(5);
b.newTab(Y);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(Z);
b.newTab(Z);
c.moveActiveTabTo(1);
d.newTab(Z);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->switchToWindow(3);
brows->getWindow(6);
brows->print();
brows->newWindow();
brows->getWindow(2);
brows->switchToWindow(0);
brows->switchToWindow(6);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->getWindow(4);
brows->closeWindow();
brows->print();
brows->getWindow(3);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->getWindow(4);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->getWindow(6);
brows->newWindow();
brows->closeWindow();
brows->getWindow(5);
brows->mergeAllWindows();
brows->print();
brows->getWindow(2);
brows->mergeAllWindows();
brows->getWindow(3);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->mergeAllWindows();
brows->print();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->getWindow(9);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->mergeAllWindows();
brows->getWindow(1);
brows->switchToWindow(4);
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(9);
brows->switchToWindow(9);
brows->print();
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(9);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->newWindow();
brows->newWindow();
brows->print();
brows->print();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(5);
brows->closeWindow();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(3);
delete brows;
}
	return 0;
};