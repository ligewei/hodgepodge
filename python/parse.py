
# The name of program can not be 'xml.py'

try:
    import xml.etree.cElementTree as et
except ImportError:
    import xml.etree.ElementTree as et

tree = et.parse('a.xml')
root = tree.getroot()

print root.tag, root.attrib

for child in root:
    print child.tag, child.attrib, child.text

print root[0][0]
print root[0][0].tag
print root[0][0].attrib
print root[0][0].text


for elem in tree.iter():
    print elem.tag, elem.attrib, elem.text
