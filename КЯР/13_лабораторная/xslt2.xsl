<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>Student</title></head>
<body>
<h2>list of students</h2>
<table border="1">
<tr bgcolor='#c2f0ee'>
<th>Имя</th>
<th>Фамилия</th>
<th>Оценка</th></tr>
<xsl:for-each select="students/student">
<xsl:sort select="mark" order="descending"/>
<tr>
    <td><xsl:value-of select="name"/></td>
    <td><xsl:value-of select="surname"/></td>
    <xsl:choose>
        <xsl:when test="mark &lt; 4">
            <td bgcolor='#ff0000'>
            <xsl:value-of select="mark"/></td>
        </xsl:when>
        <xsl:when test="mark &gt; 8">
            <td bgcolor='#008000'>
            <xsl:value-of select="mark"/></td>
        </xsl:when>
        <xsl:otherwise>
            <td><xsl:value-of select="mark"/></td>
        </xsl:otherwise>
    </xsl:choose>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>