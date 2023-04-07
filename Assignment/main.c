#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define sl 100


struct Date {
    int ngay;
    int thang;
    int nam;
};
typedef struct Date date;

struct NhanVien{
    int msnv;
    char ho[20];
    char ten[20];
    date namsinh;
    char noisinh[100];
    char diachi[200];
    float luong;
    date ngayvao;
};
typedef struct NhanVien nhanvien;

struct DanhSach{
    nhanvien a[sl];
    int n;
};
typedef struct DanhSach danhsach;

void nhanngaythang(date *ntn) {
    printf("Nhap ngay: ");
    scanf("%d", &ntn->ngay);
    printf("Nhap thang: ");
    scanf("%d", &ntn->thang);
    printf("Nhap nam: ");
    scanf("%d", &ntn->nam);
}

void xuatngaythang(date ntn) {
    printf("%d/%d/%d\n", ntn.ngay, ntn.thang, ntn.nam);
}

void nhap1nv(nhanvien *nv) {
    printf("Nhap ma so nhan vien: ");
    scanf("%d", &nv->msnv);
    printf("Nhap ho nhan vien: ");
    scanf("%s", nv->ho);
    printf("Nhap ten nhan vien: ");
    scanf("%s", nv->ten);
    printf("Nhap ngay sinh: ");
    nhanngaythang(&nv->namsinh);
    printf("Nhap noi sinh: ");
    scanf("%s", nv->noisinh);
    printf("Nhap dia chi: ");
    scanf("%s", nv->diachi);
    printf("Nhap luong: ");
    scanf("%f", &nv->luong);
    printf("Nhap ngay vao lam: ");
    nhanngaythang(&nv->ngayvao);
}


void xuat1nv(nhanvien nv) {
    printf("Ma so nhan vien: %d\n", nv.msnv);
    printf("Ho nhan vien: %s\n", nv.ho);
    printf("Ten nhan vien: %s\n", nv.ten);
    printf("Ngay sinh: ");
    xuatngaythang(nv.namsinh);
    printf("Noi sinh: %s\n", nv.noisinh);
    printf("Dia chi: %s\n", nv.diachi);
    printf("Luong: %.2f\n", nv.luong);
    printf("Ngay vao lam: ");
    xuatngaythang(nv.ngayvao);
}


void nhapdanhsach(danhsach *ds) {
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &ds->n);

    for (int i = 0; i < ds->n; i++) {
        printf("\nNhap thong tin cho nhan vien thu %d:\n", i+1);
        nhap1nv(&ds->a[i]);
    }
}


void xuatdanhsach(danhsach ds) {
    printf("\nDanh sach nhan vien:\n");
    printf("MSNV \tHO \tTEN \tNGAY SINH \tNOI SINH \tDIA CHI \tLUONG \tNGAY VAO\n");

    for (int i = 0; i < ds.n; i++) {
        xuat1nv(ds.a[i]);
    }
}


void themnv(danhsach *ds, nhanvien x, int k){
    if (ds->n == sl){
        printf("Danh sach da day!");
        return;
    }
    if (k < 0 || k > ds->n){
        printf("Vi tri them khong hop le!");
        return;
    }
    if (k < ds->n){
        for (int i = ds->n - 1; i >= k; i--){
            ds->a[i+1] = ds->a[i];
        }
    }
    ds->a[k] = x;
    ds->n++;
}


int timMSNV(danhsach ds, int d){
    for (int i = 0; i < ds.n; i++){
        if (ds.a[i].msnv == d){
            return i;
        }
    }
    return -1;
}

int timten(danhsach ds, char* ten) {
    int l = 0, r = ds.n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (strcmp(ds.a[mid].ten, ten) == 0) {
            return mid;
        }
        else if (strcmp(ds.a[mid].ten, ten) < 0) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return -1;
}


void xoanv(danhsach ds, int d){
    int i, j;
    for (i = 0; i < ds.n; i++) {
        if (ds.a[i].msnv == d) {
            for (j = i; j < ds.n - 1; j++) {
                ds.a[j] = ds.a[j + 1];
            }
            ds.n--;
            printf("\nDa xoa nhan vien co ma so %d", d);
            return;
        }
    }
    printf("\nKhong tim thay nhan vien co ma so %d", d);
}

void sapxep(danhsach ds){
    int i, j;
    nhanvien temp;
    for (i = 0; i < ds.n - 1; i++) {
        for (j = 0; j < ds.n - i - 1; j++) {
            if (ds.a[j].luong < ds.a[j + 1].luong) {
                temp = ds.a[j];
                ds.a[j] = ds.a[j + 1];
                ds.a[j + 1] = temp;
            }
        }
    }
}


void menu(){
    int chon;
    int d, k;
    danhsach ds;
    nhanvien x;
    nhapdanhsach(&ds);
    xuatdanhsach(ds);
    char ten[20];
    printf("\n-------------------MENU----------------");
    printf("\n1.Them vao 1 nhan vien");
    printf("\n2.Tim nhan vien theo ma so");
    printf("\n3.Tim nhan vien theo ten");
    printf("\n4.Bang luong cua nhan vien giam dan");
    printf("\n5.Xoa 1 nhan vien");
    printf("\n\--------------------------------------");
    printf("\nChon 1 trong chuc nang tren:  ");
    scanf("%d", &chon);

    switch (chon) {
        case 1:
            nhap1nv(&x);
            printf("\nNhap vi tri muon them vao: ");
            scanf("%d", &k);
            themnv(&ds, x, k);
            xuatdanhsach(ds);
            break;
        case 2:
            printf("\nNhap ma so nhan vien can tim: ");
            scanf("%d", &d);
            k = timMSNV(ds, d);
            if (k == -1) {
                printf("\nKhong tim thay nhan vien co ma so nay");
            }
            else {
                xuat1nv(ds.a[k]);
            }
            break;
        case 3:
            printf("\nNhap ten nhan vien can tim: ");
            scanf("%s", ten);
            k = timten(ds, ten);
            if (k == -1) {
                printf("\nKhong tim thay nhan vien co ten nay");
            }
            else {
                xuat1nv(ds.a[k]);
            }
            break;
        case 4:
            sapxep(ds);
            xuatdanhsach(ds);
            break;
        case 5:
            printf("\nNhap ma so nhan vien can xoa: ");
            scanf("%d", &d);
            xoanv(ds, d);
            xuatdanhsach(ds);
            break;
        default:
            printf("\nKhong co chuc nang nay");
            break;
    }
}



int main() {

    while (true){
        menu();
    }
}
