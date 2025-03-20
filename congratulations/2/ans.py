class UserMainCode(object):

    @classmethod
    def surpriseDebate(cls, input1, input2, input3):
        input2.sort()  # Sort roll numbers in ascending order
        selected_numbers = []

        left, right = 0, input1 - 1  # Corrected the initialization

        while left < right:
            if (input2[left] + input2[right]) % input3 == 0:
                selected_numbers.append(input2[left])
            left += 1
            right -= 1

        # If one student is left, check if twice their roll number is divisible by K
        if left == right and (2 * input2[left]) % input3 == 0:
            selected_numbers.append(input2[left])

        return min(selected_numbers) if selected_numbers else -1



# Final Complexity Summary
# Time Complexity: O(N log N)
# Space Complexity: O(N) (due to selected_numbers list)