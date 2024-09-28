from collections import defaultdict

def find_valid_x(a):
    pos_map = defaultdict(list)
    
    # Step 1: Collect positions of each element
    for i in range(len(a)):
        pos_map[a[i]].append(i+1)  # storing 1-based positions

    valid_x = []
    
    # Step 2: Check if positions form an AP
    for x, positions in pos_map.items():
        if len(positions) == 1:
            valid_x.append((x, 0))
        else:
            common_diff = positions[1] - positions[0]
            is_ap = True
            for j in range(2, len(positions)):
                if positions[j] - positions[j-1] != common_diff:
                    is_ap = False
                    break
            if is_ap:
                valid_x.append((x, common_diff))
    
    return valid_x

# Example usage:
a = [1, 2, 1, 3, 1, 5, 1]
result = find_valid_x(a)
for x, d in result:
    print(f"x = {x}, common difference = {d}")
