nhược điểm  : tốn chi phí về bộ nhớ -> lưu địa chỉ trả về  
dùng recurrsive với 1 số trường hợp : 
Tail Recursion (đệ quy đuôi) + compiler hỗ trợ 
Đệ quy + memoization (quy hoạch động top-down)
Bài toán "không thể" viết iterative một cách tự nhiên : trade off 


 1. Đệ quy thuần (Pure Recursion / Naive Recursion)
→ Bản chất: Gọi lại chính mình mà không lưu kết quả.

🔹 2. Đệ quy có nhớ (Memoization / Top-down DP)
→ Bản chất: Lưu kết quả đã tính để tránh tính lại.

3. Đệ quy đuôi (Tail Recursion)
→ Bản chất: Lời gọi đệ quy là hành động cuối cùng của hàm — không làm gì sau khi gọi.

🔹 4. Đệ quy phân chia (Divide and Conquer Recursion)
→ Bản chất: Chia bài toán thành các phần độc lập, giải riêng, rồi gộp kết quả.


- Đệ quy sâu  
    có điểm dừng 
    gọi max -> min
    thực thi từ min -> max

    