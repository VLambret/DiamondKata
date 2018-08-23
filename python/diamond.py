def mirror(my_list):
    return my_list + my_list[::-1][1::]

def letter_sequence(letter):
    left_list = [chr(item) for item in range(ord('A'), ord(letter) + 1)]
    return mirror(left_list)

def indent_sequence(letter):
    max_indent_level = ord(letter) - ord('A')
    left_list = [item for item in range(max_indent_level , -1, -1)]
    return mirror(left_list)

def space_between_sequence(letter):
    max_space_level = ord(letter) - ord('A')
    left_list = [0] + [item for item in range(1, 2 * max_space_level, 2)]
    return mirror(left_list)

class Diamond:

	def __init__(self, middle_letter):
		self.middle_letter = middle_letter
		self.letter_sequence = letter_sequence(middle_letter)
                self.indents = indent_sequence(middle_letter)
                self.between = space_between_sequence(middle_letter)

	def print_diamond(self):
            rows = self.rows()
            result = rows[0]
            for line in rows[1::]:
		result = result + '\n' + line
            return result

        def one_row(self, letter, indent, between):
            return indent * " " + letter + between * " " + (between != 0) * letter

        def rows(self):
            result = []
            for ln in range(0, len(self.letter_sequence)):
                result = result + [self.one_row(self.letter_sequence[ln], self.indents[ln], self.between[ln])]
            return result




if __name__ == "__main__":
	import sys

	if len(sys.argv) > 1:
		middle_letter = sys.argv[1][0]
		print Diamond(middle_letter).print_diamond()
	else:
		print "please supply one argument: the char of the diamond middle"
