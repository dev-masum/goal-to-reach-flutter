package main

import "fmt"

func twoSum(nums []int, target int) (int, int, error) {
	seen := make(map[int]int)

	for i, num := range nums {
		need := target - num
		if idx, ok := seen[need]; ok {
			return idx, i, nil
		}
		seen[num] = i
	}

	return 0, 0, fmt.Errorf("Not found")
}

func main() {
	item1, item2, err := twoSum([]int{1, 2, 3}, 6)

	if err != nil {
		fmt.Printf("%s", err.Error())
		return
	}

	fmt.Printf("%d, %d", item1, item2)
}
