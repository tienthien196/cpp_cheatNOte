```
C++ CHO LUYỆN THUẬT TOÁN
│
├── 🧱 GIAI ĐOẠN 1: NỀN TẢNG C++
│   ├── Cú pháp: int, long long, if, for, while, hàm
│   ├── Nhập/xuất: cin/cout + ios_base::sync_with_stdio(false)
│   ├── vector: push_back, size, resize
│   ├── string: length, substr, getline
│   └── Hằng: const int INF = 1e9; → tránh tràn số
│
├── ⚔️ GIAI ĐOẠN 2: STL — VŨ KHÍ CHÍNH
│   ├── <vector>       → mảng động
│   ├── <algorithm>    → sort, lower_bound, reverse
│   ├── <queue>        → queue (BFS), priority_queue (Dijkstra)
│   ├── <stack>        → stack (hiếm dùng)
│   ├── <set>/<map>    → có thứ tự, lower_bound
│   ├── <unordered_*>  → hash, nhanh hơn (đếm tần suất)
│   └── pair / tuple   → lưu (x,y), (dist, node)
│
├── 🛠️ GIAI ĐOẠN 3: KỸ THUẬT LẬP TRÌNH HIỆU QUẢ
│   ├── auto           → for (auto x : v)
│   ├── Range-for      → duyệt mảng dễ
│   ├── Lambda         → sort(..., [](a,b){...})
│   ├── Structured binding (C++17) → for (auto [x,y] : points)
│   └── setprecision   → in số thực chính xác
│
├── 🧠 GIAI ĐOẠN 4: THUẬT TOÁÁN CỐT LÕI
│   ├── Tìm kiếm nhị phân → lower_bound
│   ├── Two pointers / Sliding window
│   ├── Prefix sum / Difference array
│   ├── Đệ quy & Quay lui
│   ├── Quy hoạch động (DP) → 1D, 2D
│   ├── Đồ thị: BFS, DFS, Dijkstra
│   └── DSU / Greedy / Binary search trên đáp án
│
├── 🛡️ GIAI ĐOẠN 5: TỐI ƯU & TRÁNH LỖI
│   ├── Dùng long long khi cần
│   ├── Dùng '\n' thay endl
│   ├── Kiểm tra edge case (n=0, n=1, âm, rỗng)
│   └── Template chuẩn + compile C++17
│
└── 🚫 KHÔNG CẦN HỌC (cho contest)
    ├── union, malloc, con trỏ thô
    ├── OOP (kế thừa, đa hình)
    ├── Exception (try/catch)
    ├── Smart pointers, multithreading
    └── Viết template phức tạp
```


---
```
GIẢI THUẬT
├── 1. ĐỆ QUY
│   ├── Vét cạn
│   ├── Quay lui
│   └── (là nền cho Chia để trị & DP)
├── 2. CHIA ĐỂ TRỊ
│   ├── Merge Sort
│   ├── Binary Search
│   └── Tìm kiếm trên đáp án
├── 3. THAM LAM
│   ├── Sắp xếp + chọn
│   └── Hai con trỏ (kỹ thuật cài đặt)
└── 4. QUY HOẠCH ĐỘNG
    ├── Memoization (dựa trên đệ quy)
    └── Tabulation (dựa trên lặp)
        └── Bitmask DP (dùng xử lý bit)
```